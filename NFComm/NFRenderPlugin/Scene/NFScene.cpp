#include "NFScene.h"
/*
            This file is part of:
                NoahFrame
            https://github.com/ketoo/NoahGameFrame

   Copyright 2009 - 2020 NoahFrame(NoahGameFrame)

   File creator: lvsheng.huang

   NoahFrame is open-source software and you can redistribute it and/or modify
   it under the terms of the License; besides, anyone who use this file/software must include this copyright announcement.

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

NFGUID NFScene::AddNode(const std::string& name, const NFVector3& pos)
{
    return NFGUID();
}

NFGUID NFScene::AddNode(NF_SHARE_PTR<NFSceneNode> parent, const std::string& name, const NFVector3& pos)
{
    return NFGUID();
}

NF_SHARE_PTR<NFSceneNode> NFScene::FindNode(const NFGUID id)
{
    return NF_SHARE_PTR<NFSceneNode>();
}

void NFScene::RemoveNode(const NFGUID id)
{

}