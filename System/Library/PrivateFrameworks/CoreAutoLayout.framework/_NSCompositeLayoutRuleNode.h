/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreAutoLayout/_NSLayoutRuleNode.h>
#import <libobjc.A.dylib/_NSLayoutRuleNodeParent.h>

@class NSArray, NSMutableArray, NSString;

@interface _NSCompositeLayoutRuleNode : _NSLayoutRuleNode <_NSLayoutRuleNodeParent> {

	NSMutableArray* _childNodes;

}

@property (copy,readonly) NSArray * _childRuleNodes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)debugDescription;
-(void)dealloc;
-(void)_addChildRuleNode:(id)arg1 ;
-(void)_removeChildRuleNode:(id)arg1 ;
-(NSArray *)_childRuleNodes;
@end

