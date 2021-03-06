/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSPointerArray;

@interface VUICurrentSiriNavControllerContainer : NSObject {

	NSPointerArray* _activeNavigationControllers;

}

@property (nonatomic,retain) NSPointerArray * activeNavigationControllers;              //@synthesize activeNavigationControllers=_activeNavigationControllers - In the implementation block
+(id)sharedInstance;
+(BOOL)isRunningInSiriPluggin;
-(id)init;
-(id)currentSiriNavController;
-(void)setCurrentSiriNavController:(id)arg1 ;
-(NSPointerArray *)activeNavigationControllers;
-(void)setActiveNavigationControllers:(NSPointerArray *)arg1 ;
@end

