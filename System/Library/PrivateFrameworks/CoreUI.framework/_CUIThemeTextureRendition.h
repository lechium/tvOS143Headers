/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class CUIStructuredThemeStore, TXRTextureInfo, NSMutableArray;

@interface _CUIThemeTextureRendition : CUIThemeRendition {

	CUIStructuredThemeStore* _sourceProvider;
	long long _textureInterpretation;
	BOOL _textureSourceImageOpaque;
	TXRTextureInfo* _textureInfo;
	NSMutableArray* _textureMipLevels;

}
-(void)dealloc;
-(id)provideTextureInfo;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(void)_setStructuredThemeStore:(id)arg1 ;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 ;
-(id)provideImageInfoAtLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 face:(unsigned long long)arg3 withBufferAllocator:(id)arg4 ;
-(id)mipLevels;
-(id)_texturedImageWithKey:(id)arg1 ;
-(long long)textureIntepretation;
@end

