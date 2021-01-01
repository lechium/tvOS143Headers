/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GraphVisualizer.framework/GraphVisualizer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <GraphVisualizer/GraphVisualizer-Structs.h>
@class NSMutableOrderedSet;

@interface GVGraph : NSObject {

	NSMutableOrderedSet* nodes;
	NSMutableOrderedSet* edges;

}

@property (nonatomic,retain) NSMutableOrderedSet * nodes; 
@property (nonatomic,retain) NSMutableOrderedSet * edges; 
@property (nonatomic,readonly) CGRect bounds; 
-(id)description;
-(id)init;
-(void)dealloc;
-(CGRect)bounds;
-(BOOL)hasEdgeFrom:(id)arg1 to:(id)arg2 ;
-(id)edgeFrom:(id)arg1 to:(id)arg2 ;
-(void)removeEdgeFrom:(id)arg1 to:(id)arg2 ;
-(void)addEdgeFrom:(id)arg1 to:(id)arg2 reversed:(BOOL)arg3 ;
-(id)allNodes;
-(BOOL)hasNode:(id)arg1 ;
-(void)addNode:(id)arg1 ;
-(void)removeNode:(id)arg1 ;
-(id)allEdges;
-(void)addEdgeFrom:(id)arg1 to:(id)arg2 ;
-(void)reverseEdge:(id)arg1 ;
-(void)undoReverseEdge:(id)arg1 ;
-(id)connectedSubgraphs;
-(BOOL)render:(id)arg1 ;
-(void)iterateOverAllEdges:(/*^block*/id)arg1 ;
-(void)iterateOverAllNodes:(/*^block*/id)arg1 ;
-(NSMutableOrderedSet *)nodes;
-(void)setNodes:(NSMutableOrderedSet *)arg1 ;
-(NSMutableOrderedSet *)edges;
-(void)setEdges:(NSMutableOrderedSet *)arg1 ;
@end

