/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NaturalLanguage/NLModelImpl.h>

@class MLModel, NLModelConfiguration, NSString;

@interface NLModelImplML : NLModelImpl {

	MLModel* _mlModel;
	NLModelConfiguration* _configuration;
	NSString* _inputName;
	NSString* _outputName;

}
-(id)configuration;
-(id)modelData;
-(id)predictedLabelForString:(id)arg1 ;
-(id)initWithModelData:(id)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 customEmbeddingData:(id)arg6 trainingInfo:(id)arg7 error:(id*)arg8 ;
-(id)initWithModelTrainer:(id)arg1 error:(id*)arg2 ;
-(id)initWithMLModel:(id)arg1 configuration:(id)arg2 ;
-(id)predictedLabelsForTokens:(id)arg1 ;
@end

