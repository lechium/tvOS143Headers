/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIStatusBarRegionAxisLayout.h>

@class NSString;

@interface _UIStatusBarRegionAxisCenteringLayout : NSObject <_UIStatusBarRegionAxisLayout> {

	double _interspace;
	double _margin;
	long long _maxNumberOfItems;

}

@property (assign,nonatomic) double interspace;                       //@synthesize interspace=_interspace - In the implementation block
@property (assign,nonatomic) double margin;                           //@synthesize margin=_margin - In the implementation block
@property (assign,nonatomic) long long maxNumberOfItems;              //@synthesize maxNumberOfItems=_maxNumberOfItems - In the implementation block
@property (nonatomic,readonly) BOOL canOverflowItems; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(double)margin;
-(void)setMargin:(double)arg1 ;
-(void)setInterspace:(double)arg1 ;
-(double)interspace;
-(long long)maxNumberOfItems;
-(id)constraintsForDisplayItems:(id)arg1 layoutGuides:(id)arg2 inContainerItem:(id)arg3 axis:(long long)arg4 ;
-(BOOL)mayFitDisplayItems:(id)arg1 ;
-(BOOL)canOverflowItems;
-(void)setMaxNumberOfItems:(long long)arg1 ;
@end

