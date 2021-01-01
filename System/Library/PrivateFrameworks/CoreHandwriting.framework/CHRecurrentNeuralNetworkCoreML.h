/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:08 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHandwriting/CHRecurrentNeuralNetwork.h>

@class MLModel, NSString, NSArray, NSDictionary;

@interface CHRecurrentNeuralNetworkCoreML : CHRecurrentNeuralNetwork {

	MLModel* _model;
	NSString* _resourcePath;
	NSArray* _inputNames;
	NSDictionary* _featureCounts;
	NSArray* _outputNames;
	NSDictionary* _classCounts;

}

@property (nonatomic,retain,readonly) MLModel * model;                           //@synthesize model=_model - In the implementation block
@property (nonatomic,retain,readonly) NSString * resourcePath;                   //@synthesize resourcePath=_resourcePath - In the implementation block
@property (nonatomic,retain,readonly) NSArray * inputNames;                      //@synthesize inputNames=_inputNames - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * featureCounts;              //@synthesize featureCounts=_featureCounts - In the implementation block
@property (nonatomic,retain,readonly) NSArray * outputNames;                     //@synthesize outputNames=_outputNames - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * classCounts;                //@synthesize classCounts=_classCounts - In the implementation block
-(void)dealloc;
-(NSString *)resourcePath;
-(MLModel *)model;
-(NSDictionary *)featureCounts;
-(id)initWithModelName:(id)arg1 ;
-(NSArray *)inputNames;
-(NSArray *)outputNames;
-(NSDictionary *)classCounts;
-(id)initWithModelName:(id)arg1 featureIndex:(long long)arg2 ;
@end

