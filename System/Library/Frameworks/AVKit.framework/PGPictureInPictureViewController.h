/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PGPictureInPictureViewController <NSObject>
@property (nonatomic,readonly) BOOL shouldShowAlternateActionButtonImage; 
@property (nonatomic,readonly) BOOL shouldShowLoadingIndicator; 
@optional
-(void)actionButtonTapped;
-(BOOL)shouldShowAlternateActionButtonImage;
-(void)willAnimatePictureInPictureStart;
-(void)didAnimatePictureInPictureStart;
-(void)willAnimatePictureInPictureStop;
-(void)didAnimatePictureInPictureStop;
-(void)viewWillResize;
-(void)viewDidResize;
-(BOOL)shouldShowLoadingIndicator;

@end

