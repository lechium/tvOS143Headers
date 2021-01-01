/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableSet, PGGraphNode, PGGraphEdge, NSString, NSSet;

@interface PGLocationTitleComponent : NSObject {

	NSMutableSet* _addressNodes;
	float _weight;
	PGGraphNode* _node;
	PGGraphEdge* _edge;
	double _timestampStart;
	unsigned long long _type;
	NSString* _personName;

}

@property (nonatomic,retain) PGGraphNode * node;                   //@synthesize node=_node - In the implementation block
@property (nonatomic,retain) PGGraphEdge * edge;                   //@synthesize edge=_edge - In the implementation block
@property (nonatomic,retain) NSSet * addressNodes;                 //@synthesize addressNodes=_addressNodes - In the implementation block
@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) NSString * personName;                //@synthesize personName=_personName - In the implementation block
@property (nonatomic,readonly) double timestampStart;              //@synthesize timestampStart=_timestampStart - In the implementation block
@property (nonatomic,readonly) float weight;                       //@synthesize weight=_weight - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(float)weight;
-(PGGraphNode *)node;
-(NSString *)personName;
-(void)setNode:(PGGraphNode *)arg1 ;
-(void)setPersonName:(NSString *)arg1 ;
-(PGGraphEdge *)edge;
-(void)setEdge:(PGGraphEdge *)arg1 ;
-(double)timestampStart;
-(void)addAddressNode:(id)arg1 ;
-(BOOL)canMergeWithTitleComponent:(id)arg1 ;
-(void)updateWithMomentNodes:(id)arg1 ;
-(NSSet *)addressNodes;
-(void)setAddressNodes:(NSSet *)arg1 ;
@end

