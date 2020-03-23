# Gitlab Interface

#  Issues

The GitLab issue tracker is an advanced tool for collaboratively developing ideas, solving problems, and planning work between you, your team and outside collaborators.

While you can view and manage the full details of an issue on the issue page, you can also work with multiple issues at a time using the Issues List, Issue Boards, Issue references, and Epics. [Creating](https://docs.gitlab.com/ee/user/project/issues/managing_issues.html#create-a-new-issue), [moving](https://docs.gitlab.com/ee/user/project/issues/managing_issues.html#moving-issues), [closing](https://docs.gitlab.com/ee/user/project/issues/managing_issues.html#closing-issues), and [deleting](https://docs.gitlab.com/ee/user/project/issues/managing_issues.html#deleting-issues) are key actions that you can do with issues.

## Issue page
On an issue’s page, you can view all aspects of the issue, and modify them if you have the necessary permissions.
![issue_page](https://docs.gitlab.com/ee/user/project/issues/img/issue_weight.png)

## Issues list
On the Issues List, you can view all issues in the current project, or from multiple projects when opening the Issues List from the higher-level group context. You can also sort a list of issues in several ways.

![issue_list](https://docs.gitlab.com/ee/user/project/issues/img/project_issues_list_view.png)

## Issue boards
Issue boards are Kanban boards with columns that display issues based on their labels or their assignees. They offer the flexibility to manage issues using highly customizable workflows. You can reorder issues within a column.

![issue_board](https://docs.gitlab.com/ee/user/project/img/issue_boards_core.png)

## Design Management
With [Design Management](https://docs.gitlab.com/ee/user/project/issues/design_management.html), you can upload design assets to issues and view them all together to easily share and collaborate with your team.

## Epics
[Epics](https://docs.gitlab.com/ee/user/group/epics/index.html) let you manage your portfolio of projects more efficiently and with less effort by tracking groups of issues that share a theme, across projects and milestones.

## Related Issues
You can mark two issues as related, so that when viewing one, the other is always listed in its [Related Issues](https://docs.gitlab.com/ee/user/project/issues/related_issues.html) section. This can help display important context, such as past work, dependencies, or duplicates.

## Crosslinking Issues
You can [crosslink issues](https://docs.gitlab.com/ee/user/project/issues/crosslinking_issues.html) by referencing an issue from another issue or merge request by including its URL or ID. The referenced issue displays a message in the Activity stream about the reference, with a link to the other issue or MR.

## Similar Issues 
With [similar issues](https://docs.gitlab.com/ee/user/project/issues/similar_issues.html), you can prevent duplication of issues for the same topic, GitLab searches for similar issues when new issues are being created.


# **Repository**

A repository is what you use to store your codebase in GitLab and change it with version control. The main purpose of a repository is to store a set of files, as well as the history of changes made to those files. 
To create a new repository, all you need to do is [create a new project](https://docs.gitlab.com/ee/gitlab-basics/create-project.html) or [fork an existing project](https://docs.gitlab.com/ee/user/project/repository/forking_workflow.html).

## Files
* [Create and edit files](https://docs.gitlab.com/ee/user/project/repository/#create-and-edit-files)
* [Find files](https://docs.gitlab.com/ee/user/project/repository/file_finder.html)
* [Supported markup languages and extensions](https://docs.gitlab.com/ee/user/project/repository/#supported-markup-languages-and-extensions)
* [Repository README and index files](https://docs.gitlab.com/ee/user/project/repository/#repository-readme-and-index-files)
* [Jupyter Notebook files](https://docs.gitlab.com/ee/user/project/repository/#jupiter-notebook-files)
* [OpenAPI viewer](https://docs.gitlab.com/ee/user/project/repository/#openapi-viewer)

## Branches

A [branch](https://docs.gitlab.com/ee/user/project/repository/branches/index.html) is a version of a project’s working tree. You create a branch for each set of related changes you make. This keeps each set of changes separate from each other, allowing changes to be made in parallel, without affecting each other.

## Commits

When you [commit](https://git-scm.com/book/en/v2/Git-Basics-Recording-Changes-to-the-Repository) your changes, you are introducing those changes to your branch. Via command line, you can commit multiple times before pushing.

## Project and repository size

A project’s size is reported on the project’s Details page. The reported size is updated every 15 minutes at most, so may not reflect recent activity. The displayed files size includes repository files, artifacts, and LFS.

## Contributors

All the contributors to your codebase are displayed under your project’s Settings > Contributors.

![contributors](https://docs.gitlab.com/ee/user/project/repository/img/contributors_graph.png)

## Repository graph

The repository graph displays visually the Git flow strategy used in that repository. Find it under your project’s **Repository > Graph**.

![repo_graph](https://docs.gitlab.com/ee/user/project/repository/img/repo_graph.png)

## Repository Languages

For the default branch of each repository, GitLab will determine what programming languages were used and display this on the projects pages. If this information is missing, it will be added after updating the default branch on the project. This process can take up to 5 minutes.

## Locked files
Use [File Locking](https://docs.gitlab.com/ee/user/project/file_lock.html) to lock your files to prevent any conflicting changes.

## Repository’s API
You can access your repos via [repository API](https://docs.gitlab.com/ee/api/repositories.html).

## Download Source Code
By clicking the download icon, a dropdown will open with links to download the following:
![source_code](https://docs.gitlab.com/ee/user/project/repository/img/download_source_code.png)



