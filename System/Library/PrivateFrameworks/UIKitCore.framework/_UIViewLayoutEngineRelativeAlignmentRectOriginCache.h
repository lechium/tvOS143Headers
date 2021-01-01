/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class UIView, NSISEngine;

@interface _UIViewLayoutEngineRelativeAlignmentRectOriginCache : NSObject {

	CGPoint _cachedOrigin;
	UIView* _delegate;
	NSISEngine* _cacheEngine;
	unsigned long long _variableChangeCount;

}

@property (assign,nonatomic,__weak) NSISEngine * cacheEngine;                     //@synthesize cacheEngine=_cacheEngine - In the implementation block
@property (assign,nonatomic) unsigned long long variableChangeCount;              //@synthesize variableChangeCount=_variableChangeCount - In the implementation block
@property (nonatomic,readonly) CGPoint origin; 
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,__weak,readonly) UIView * delegate;                          //@synthesize delegate=_delegate - In the implementation block
-(BOOL)isValid;
-(UIView *)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(CGPoint)origin;
-(unsigned long long)variableChangeCount;
-(void)setCacheEngine:(NSISEngine *)arg1 ;
-(NSISEngine *)cacheEngine;
-(void)setVariableChangeCount:(unsigned long long)arg1 ;
@end
