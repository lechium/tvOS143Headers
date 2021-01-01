/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@interface UIKBSplitTraits : NSObject {

	unsigned long long _corners;
	CGRect _leftFrame;
	CGRect _rightFrame;

}

@property (nonatomic,readonly) CGRect leftFrame;                        //@synthesize leftFrame=_leftFrame - In the implementation block
@property (nonatomic,readonly) CGRect rightFrame;                       //@synthesize rightFrame=_rightFrame - In the implementation block
@property (nonatomic,readonly) unsigned long long corners;              //@synthesize corners=_corners - In the implementation block
+(id)traitsWithLeftFrame:(CGRect)arg1 rightFrame:(CGRect)arg2 corners:(unsigned long long)arg3 ;
-(unsigned long long)corners;
-(id)initWithLeftFrame:(CGRect)arg1 rightFrame:(CGRect)arg2 corners:(unsigned long long)arg3 ;
-(CGRect)leftFrame;
-(CGRect)rightFrame;
@end
