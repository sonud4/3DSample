#ifndef __RESULT_SCENE_H__
#define __RESULT_SCENE_H__

#include"Texture.h"
#include "Scene.h"

class ResultScene :public Scene
{
public:
	ResultScene(void);
	~ResultScene(void);

	void Init();
	void Uninit();
	// 戻り値でシーンを移動するかどうか判定
	SCENE Update();
	void Draw();


	//private:
		//ID3D11ShaderResourceView* m_pTexture[2];


		//bool m_isFadeOut;
};


#endif