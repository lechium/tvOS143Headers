/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGMeaningfulEventTrait.h>

@class NSSet;

@interface PGMeaningfulEventSetTrait : PGMeaningfulEventTrait {

	NSSet* _nodes;
	NSSet* _negativeNodes;
	/*^block*/id _additionalMatchingBlock;

}

@property (nonatomic,readonly) NSSet * nodes;                       //@synthesize nodes=_nodes - In the implementation block
@property (nonatomic,readonly) NSSet * negativeNodes;               //@synthesize negativeNodes=_negativeNodes - In the implementation block
@property (nonatomic,copy) id additionalMatchingBlock;              //@synthesize additionalMatchingBlock=_additionalMatchingBlock - In the implementation block
-(BOOL)isActive;
-(NSSet *)nodes;
-(id)initWithNodes:(id)arg1 ;
-(id)debugDescriptionWithMomentNode:(id)arg1 ;
-(id)initWithNodes:(id)arg1 negativeNodes:(id)arg2 ;
-(NSSet *)negativeNodes;
-(id)additionalMatchingBlock;
-(void)setAdditionalMatchingBlock:(id)arg1 ;
@end

