from os import walk, path
import re

TEST_PROGRAMS_PATH = "programs/test_programs"
ANTLR_SUGAR_GRAMMAR_PATH = "antlr/Sugar.g4"

MATCH_CODE_LINK = r"~\$code\((\w+)\)\{([^{}]+)\}"
MATCH_MD_LINK = r"~\$md\{([^{}]+)\}"


def generate_code_block(code_lang: str, code_path: str) -> str:
    code = open(code_path, 'r').read() if path.isfile(
        code_path) else f"Error: File {code_path} not found."
    return f"```{code_lang}\n{code}\n```"


def calc_file_depth(file_path: str, offset: int = -1) -> int:
    return file_path.count('/') + file_path.count('\\') + offset


def generate_heading_corrected_md(md_path: str) -> str:
    md = open(md_path, 'r').read() if path.isfile(
        md_path) else f"Error: File {md_path} not found"
    prefix = '#' * calc_file_depth(md_path)

    return "\n".join(
        f"{prefix}{line}" if line.startswith("#") else line
        for line in md.splitlines()
    )


def load_and_insert(doc_template_path: str, doc_path: str) -> None:
    template = open(doc_template_path, 'r').read()
    doc = open(doc_path, 'w+')

    code_links = re.findall(MATCH_CODE_LINK, template)
    for link in code_links:
        print(f"Found: ~$code({link[0]}){{{link[1]}}}")
        template = template.replace(
            f"~$code({link[0]}){{{link[1]}}}", generate_code_block(link[0], link[1]))

    md_links = re.findall(MATCH_MD_LINK, template)
    for link in md_links:
        print(f"Found: ~$md{{{link}}}")
        template = template.replace(f"~$md{{{link}}}", generate_heading_corrected_md(link))

    # fix hard tab rule violations
    template = template.replace('\t', '  ')
    doc.write(template)


if __name__ == '__main__':
    load_and_insert("docs\SugarDocTemplate.md", "docs\SugarDoc.md")
