#!/bin/sh
set -e
git commit -m "Deploy code docs to GitHub Pages Travis build: ${TRAVIS_BUILD_NUMBER}" -m "Commit: ${TRAVIS_COMMIT}" > /dev/null 2>&1
git push --force --quiet "https://${GH_REPO_TOKEN}@${GH_REPO_REF}" > /dev/null 2>&1
