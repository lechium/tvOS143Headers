/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _UICollectionLayoutVisualTreeNode, NSArray;

@interface _UICollectionLayoutVisualFormatTreeParser : NSObject {

	_UICollectionLayoutVisualTreeNode* _root;
	NSArray* _visualFormats;

}

@property (nonatomic,copy) NSArray * visualFormats;                                 //@synthesize visualFormats=_visualFormats - In the implementation block
@property (nonatomic,retain) _UICollectionLayoutVisualTreeNode * root;              //@synthesize root=_root - In the implementation block
+(id)treeParserWithVisualFormats:(id)arg1 ;
-(id)description;
-(id)_parse;
-(_UICollectionLayoutVisualTreeNode *)root;
-(void)setRoot:(_UICollectionLayoutVisualTreeNode *)arg1 ;
-(NSArray *)visualFormats;
-(void)setVisualFormats:(NSArray *)arg1 ;
-(id)initWithVisualFormats:(id)arg1 ;
-(void)_visitChildrenOfNodeDepthFirst:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_nodeForParser:(id)arg1 withParserDict:(id)arg2 size:(id)arg3 ;
-(id)_normalizeFractionsOfLayoutVFLItemsForItems:(id)arg1 ;
-(void)enumerateTreeNodesDepthFirstUsingBlock:(/*^block*/id)arg1 ;
@end

