/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:05 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class FBSDisplayMode;

@interface UIScreenMode : NSObject {

	FBSDisplayMode* _mode;
	BOOL _mainScreen;

}

@property (setter=_setMainScreen:,getter=_isMainScreen) BOOL _mainScreen;              //@synthesize mainScreen=_mainScreen - In the implementation block
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double pixelAspectRatio; 
+(id)_screenModeForDisplayMode:(id)arg1 mainScreen:(BOOL)arg2 ;
-(id)description;
-(CGSize)size;
-(double)pixelAspectRatio;
-(id)_displayMode;
-(BOOL)_isMainScreen;
-(void)_setMainScreen:(BOOL)arg1 ;
-(id)initWithDisplayMode:(id)arg1 mainScreen:(BOOL)arg2 ;
-(CGSize)_sizeWithLevel:(unsigned long long)arg1 ;
@end

