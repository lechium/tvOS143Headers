/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:14 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSIndexPath, NSArray;

@interface VSTreeNode : NSObject {

	id _representedObject;
	VSTreeNode* _parentNode;
	NSMutableArray* _children;

}

@property (assign,nonatomic,__weak) VSTreeNode * parentNode;                    //@synthesize parentNode=_parentNode - In the implementation block
@property (nonatomic,retain) NSMutableArray * children;                         //@synthesize children=_children - In the implementation block
@property (nonatomic,readonly) id representedObject;                            //@synthesize representedObject=_representedObject - In the implementation block
@property (nonatomic,copy,readonly) NSIndexPath * indexPath; 
@property (getter=isLeaf,nonatomic,readonly) BOOL leaf; 
@property (nonatomic,copy,readonly) NSArray * childNodes; 
@property (nonatomic,readonly) NSMutableArray * mutableChildNodes; 
+(id)treeNodeWithRepresentedObject:(id)arg1 ;
+(id)keyPathsForValuesAffectingIndexPath;
+(id)keyPathsForValuesAffectingLeaf;
-(id)init;
-(NSMutableArray *)children;
-(NSIndexPath *)indexPath;
-(VSTreeNode *)parentNode;
-(NSArray *)childNodes;
-(id)representedObject;
-(void)setChildren:(NSMutableArray *)arg1 ;
-(BOOL)isLeaf;
-(void)setParentNode:(VSTreeNode *)arg1 ;
-(id)initWithRepresentedObject:(id)arg1 ;
-(void)insertChildNodes:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeChildNodesAtIndexes:(id)arg1 ;
-(NSMutableArray *)mutableChildNodes;
-(id)descendantNodeAtIndexPath:(id)arg1 ;
-(id)_descendantNodesAtDepth:(unsigned long long)arg1 ;
-(void)enumerateDescendantsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
@end
