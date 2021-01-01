/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <Foundation/NSOperation.h>

@class NSArray, UIImage, NSDictionary;

@interface VUIOverlayBackgroundMaterialImagesOperation : NSOperation {

	NSArray* _overlayMaterialRequests;
	UIImage* _resizedSourceBackgroundImage;
	NSDictionary* _overlayMaterialImageByIdentifier;
	UIImage* _sourceBackgroundImage;
	CGSize _resizedBackgroundImageSize;

}

@property (nonatomic,retain) UIImage * sourceBackgroundImage;                            //@synthesize sourceBackgroundImage=_sourceBackgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * resizedSourceBackgroundImage;                     //@synthesize resizedSourceBackgroundImage=_resizedSourceBackgroundImage - In the implementation block
@property (nonatomic,copy) NSDictionary * overlayMaterialImageByIdentifier;              //@synthesize overlayMaterialImageByIdentifier=_overlayMaterialImageByIdentifier - In the implementation block
@property (assign,nonatomic) CGSize resizedBackgroundImageSize;                          //@synthesize resizedBackgroundImageSize=_resizedBackgroundImageSize - In the implementation block
@property (nonatomic,copy) NSArray * overlayMaterialRequests;                            //@synthesize overlayMaterialRequests=_overlayMaterialRequests - In the implementation block
-(id)init;
-(void)main;
-(id)initWithSourceBackgroundImage:(id)arg1 ;
-(void)setResizedBackgroundImageSize:(CGSize)arg1 ;
-(void)setOverlayMaterialRequests:(NSArray *)arg1 ;
-(UIImage *)resizedSourceBackgroundImage;
-(NSDictionary *)overlayMaterialImageByIdentifier;
-(UIImage *)sourceBackgroundImage;
-(CGSize)resizedBackgroundImageSize;
-(void)setResizedSourceBackgroundImage:(UIImage *)arg1 ;
-(NSArray *)overlayMaterialRequests;
-(id)_blurredMaterialImageWithSourceBackgroundImage:(id)arg1 forRect:(CGRect)arg2 ;
-(void)setOverlayMaterialImageByIdentifier:(NSDictionary *)arg1 ;
-(void)setSourceBackgroundImage:(UIImage *)arg1 ;
@end

