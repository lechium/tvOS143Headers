/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <KnowledgeGraphKit/KnowledgeGraphKit-Structs.h>
#import <libobjc.A.dylib/KGTraversal.h>

@class KGDatabase;

@interface KGDegasTraversal : NSObject <KGTraversal> {

	KGDatabase* _kgDatabase;
	Database* _database;
	Traversal* _traversal;
	BOOL _fixedStepMode;

}

@property (nonatomic,readonly) KGDatabase * kgDatabase;              //@synthesize kgDatabase=_kgDatabase - In the implementation block
-(void)dealloc;
-(id)initWithDatabase:(id)arg1 ;
-(id)distribution;
-(void)setStartingNodes:(id)arg1 ;
-(void)setStartingNodeFilter:(id)arg1 ;
-(void)setVariableStepMode;
-(void)setTerminatingCondition:(id)arg1 ;
-(void)setTargetNodesOnlyReportingMode;
-(void)setUncountedPathsReportingMode;
-(void)setCountedPathsReportingMode;
-(void)addStepForEdgeDirection:(unsigned long long)arg1 edgeFilter:(id)arg2 targetNodeFilter:(id)arg3 ;
-(BOOL)performTraversal:(id*)arg1 ;
-(id)targetNodes;
-(shared_ptr<degas::NodeFilter>*)makeNodeFilter:(id)arg1 ;
-(shared_ptr<degas::EdgeFilter>*)makeEdgeFilter:(id)arg1 ;
-(KGDatabase *)kgDatabase;
@end
