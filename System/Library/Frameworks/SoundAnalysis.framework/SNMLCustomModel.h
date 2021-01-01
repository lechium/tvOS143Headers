/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SNMLModel.h>

@protocol MLCustomModel;
@class MLModelDescription, NSString;

@interface SNMLCustomModel : NSObject <SNMLModel> {

	id<MLCustomModel> _customModel;
	MLModelDescription* _modelDescription;

}

@property (readonly) MLModelDescription * modelDescription;              //@synthesize modelDescription=_modelDescription - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MLModelDescription *)modelDescription;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithMLCustomModel:(id)arg1 modelDescription:(id)arg2 ;
@end

