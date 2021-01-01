/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class MABaseGraph, NSMutableSet;

@interface MAMemoryFootprint : NSObject {

	MABaseGraph* _graph;
	NSMutableSet* _allKeys;
	NSMutableSet* _allValues;
	unsigned long long _allNodesSize;
	unsigned long long _allEdgesSize;
	unsigned long long _halfEdgeCount;
	unsigned long long _orderedSetCount;
	unsigned long long _arrayCount;
	unsigned long long _dictionaryCount;
	unsigned long long _basicHashCount;
	unsigned long long _basicHashValueStoreCount;
	unsigned long long _graphSize;
	unsigned long long _nodeCount;
	unsigned long long _edgeCount;
	unsigned long long _maximumEdgeCountInNode;
	unsigned long long _countOfNodesWithAtMostEightEdges;

}

@property (nonatomic,readonly) unsigned long long totalSize; 
@property (nonatomic,readonly) unsigned long long graphSize;                                     //@synthesize graphSize=_graphSize - In the implementation block
@property (nonatomic,readonly) unsigned long long nodeCount;                                     //@synthesize nodeCount=_nodeCount - In the implementation block
@property (nonatomic,readonly) unsigned long long allNodesSize;                                  //@synthesize allNodesSize=_allNodesSize - In the implementation block
@property (nonatomic,readonly) unsigned long long averageNodeSize; 
@property (nonatomic,readonly) float averageEdgeCountPerNode; 
@property (nonatomic,readonly) unsigned long long maximumEdgeCountInNode;                        //@synthesize maximumEdgeCountInNode=_maximumEdgeCountInNode - In the implementation block
@property (nonatomic,readonly) unsigned long long countOfNodesWithAtMostEightEdges;              //@synthesize countOfNodesWithAtMostEightEdges=_countOfNodesWithAtMostEightEdges - In the implementation block
@property (nonatomic,readonly) unsigned long long edgeCount;                                     //@synthesize edgeCount=_edgeCount - In the implementation block
@property (nonatomic,readonly) unsigned long long allEdgesSize;                                  //@synthesize allEdgesSize=_allEdgesSize - In the implementation block
@property (nonatomic,readonly) unsigned long long averageEdgeSize; 
@property (nonatomic,readonly) unsigned long long actualKeyCount; 
@property (nonatomic,readonly) unsigned long long actualValueCount; 
@property (nonatomic,readonly) unsigned long long optimalKeyCount; 
@property (nonatomic,readonly) unsigned long long optimalValueCount; 
@property (nonatomic,readonly) unsigned long long actualKeysSize; 
@property (nonatomic,readonly) unsigned long long actualValuesSize; 
@property (nonatomic,readonly) unsigned long long optimalKeysSize; 
@property (nonatomic,readonly) unsigned long long optimalValuesSize; 
-(unsigned long long)version;
-(void)dump;
-(unsigned long long)totalSize;
-(void)update;
-(unsigned long long)edgeCount;
-(unsigned long long)graphSize;
-(unsigned long long)nodeCount;
-(id)initWithGraph:(id)arg1 ;
-(unsigned long long)averageNodeSize;
-(unsigned long long)averageEdgeSize;
-(float)averageEdgeCountPerNode;
-(unsigned long long)actualKeyCount;
-(unsigned long long)actualValueCount;
-(unsigned long long)optimalKeyCount;
-(unsigned long long)optimalValueCount;
-(void)_reportGraph:(id)arg1 withSize:(unsigned long long)arg2 ;
-(void)_reportNode:(id)arg1 withSize:(unsigned long long)arg2 edgeCount:(unsigned long long)arg3 ;
-(void)_reportEdge:(id)arg1 withSize:(unsigned long long)arg2 ;
-(unsigned long long)_reportOrderedSet:(id)arg1 ;
-(unsigned long long)_reportArray:(id)arg1 ;
-(unsigned long long)_reportDictionary:(id)arg1 ;
-(void)_reportKey:(id)arg1 ;
-(unsigned long long)actualKeysSize;
-(unsigned long long)optimalKeysSize;
-(void)_reportValue:(id)arg1 ;
-(unsigned long long)actualValuesSize;
-(unsigned long long)optimalValuesSize;
-(unsigned long long)allNodesSize;
-(unsigned long long)allEdgesSize;
-(unsigned long long)maximumEdgeCountInNode;
-(unsigned long long)countOfNodesWithAtMostEightEdges;
@end

