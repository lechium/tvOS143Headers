/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray;

@interface AFTreeNode : NSObject <NSFastEnumeration> {

	id _item;
	AFTreeNode* _parentNode;
	NSMutableArray* _childNodes;

}

@property (assign,setter=_setParentNode:,nonatomic,__weak) AFTreeNode * parentNode;              //@synthesize parentNode=_parentNode - In the implementation block
@property (getter=_childNodes,nonatomic,readonly) NSMutableArray * childNodes;                   //@synthesize childNodes=_childNodes - In the implementation block
@property (nonatomic,retain) id item;                                                            //@synthesize item=_item - In the implementation block
+(id)absoluteIndexPathsForTreeNodes:(id)arg1 ;
-(id)description;
-(id)init;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_AF1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)setItem:(id)arg1 ;
-(id)item;
-(AFTreeNode *)parentNode;
-(id)absoluteIndexPath;
-(id)_childNodes;
-(void)_appendDescriptionToString:(id)arg1 withIndentation:(id)arg2 ;
-(id)indexPathFromAncestorNode:(id)arg1 ;
-(long long)indexOfChildNode:(id)arg1 ;
-(long long)numberOfChildNodes;
-(id)childNodeAtIndex:(long long)arg1 ;
-(void)enumerateDescendentNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)removeChildNode:(id)arg1 ;
-(void)removeFromParentNode;
-(void)_setParentNode:(id)arg1 ;
-(void)insertChildNode:(id)arg1 atIndex:(long long)arg2 ;
-(void)removeChildNodeAtIndex:(long long)arg1 ;
-(void)enumerateChildNodesWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)containsNodeAtIndexPath:(id)arg1 ;
-(id)nodeAtIndexPath:(id)arg1 ;
-(id)indexPathOfNodeWithItem:(id)arg1 ;
-(id)lastChildNode;
-(void)addChildNode:(id)arg1 ;
-(void)replaceChildNodeAtIndex:(long long)arg1 withNode:(id)arg2 ;
-(void)enumerateChildNodesUsingBlock:(/*^block*/id)arg1 ;
@end

