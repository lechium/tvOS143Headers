/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/REAutomaticExportedInterface.h>

@class REInteractionDescriptor, REFeature;

@interface _REMLWeightedModel : NSObject <REAutomaticExportedInterface> {

	REInteractionDescriptor* _descriptor;
	REFeature* _biasFeature;

}

@property (nonatomic,readonly) float weight; 
@property (nonatomic,readonly) REFeature * selectionFeature; 
+(id)weightedModelWithDescriptor:(id)arg1 featureSet:(id)arg2 ;
-(float)weight;
-(REFeature *)selectionFeature;
-(id)predictWithFeatures:(id)arg1 ;
-(BOOL)saveModelToURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)loadModelFromURL:(id)arg1 error:(id*)arg2 ;
-(void)trainModelWithFeatureMap:(id)arg1 positiveEvent:(id)arg2 ;
-(void)enumerateModels:(/*^block*/id)arg1 ;
-(void)_configureMode:(id)arg1 ;
-(id)initWithBiasFeature:(id)arg1 ;
-(float)_biasForFeatureSet:(id)arg1 ;
-(BOOL)_loadModel:(id)arg1 fromURL:(id)arg2 error:(id*)arg3 ;
@end
