#ifndef __GAME_SCENE_H__
#define __GAME_SCENE_H__

#include"Texture.h"
#include "Scene.h"

class GameScene :public Scene
{
public:

	GameScene(void);
	~GameScene(void);

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
