/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:30 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVPlayback/TVPlayback-Structs.h>
#import <TVPlayback/TVPMusicNowPlayingImage.h>

@class UIImage, TVImageProxy, NSString;

@interface _TVPMusicNowPlayingProxyImage : NSObject <TVPMusicNowPlayingImage> {

	BOOL _loading;
	TVImageProxy* _imageProxy;
	UIImage* _image;

}

@property (nonatomic,readonly) TVImageProxy * imageProxy;                //@synthesize imageProxy=_imageProxy - In the implementation block
@property (assign,getter=isLoading,nonatomic) BOOL loading;              //@synthesize loading=_loading - In the implementation block
@property (nonatomic,retain) UIImage * image;                            //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) CGSize desiredImageSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(BOOL)isLoading;
-(void)setLoading:(BOOL)arg1 ;
-(CGSize)desiredImageSize;
-(TVImageProxy *)imageProxy;
-(id)initWithImageProxy:(id)arg1 ;
-(void)loadWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setDesiredImageSize:(CGSize)arg1 ;
@end

