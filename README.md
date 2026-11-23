# C23 실습 환경

[C23 실습 환경 바로 열기](https://codespaces.new/KukInJang/c23-lab)를 누르고 GitHub에 로그인한 뒤 **Create codespace**를 선택하세요. 저장소 페이지에서 시작하려면 **Use this template → Open in a codespace**를 선택하세요. 브라우저에 편집기가 열리면 왼쪽 파일 목록에서 `main.c`를 엽니다.

## 첫 실행

**Terminal → New Terminal**에서 아래 두 명령을 차례로 실행하세요.

```sh
gcc -std=c23 -Wall -Wextra -Wpedantic -O0 main.c -o main
./main < sample.in
```

시작 코드는 입력한 정수를 그대로 출력합니다. 터미널에 `7`이 나오면 준비가 끝났습니다. 코드를 수정한 뒤에는 저장하고 다시 컴파일하세요.

## 실습 마치기

[내 Codespaces](https://github.com/codespaces)에서 사용한 환경의 **… → Stop codespace**를 선택하세요. 이어서 작업할 때는 같은 목록에서 기존 환경 이름을 선택하세요.

화면별 사용법은 [학생용 Codespaces 안내서](docs/GitHub_Codespaces_Student_Guide.pptx)를 참고하세요.
