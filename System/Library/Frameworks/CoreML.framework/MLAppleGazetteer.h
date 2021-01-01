/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLModel.h>
#import <libobjc.A.dylib/MLModelSpecificationLoader.h>

@class MLAppleGazetteerParameters, NSString;

@interface MLAppleGazetteer : MLModel <MLModelSpecificationLoader> {

	void* gazetteerModel;
	MLAppleGazetteerParameters* _parameters;

}

@property (readonly) MLAppleGazetteerParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)loadModelFromSpecification:(MLModelSpecification*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
+(BOOL)saveAppleGazetteerModelToURL:(id)arg1 gazetteerParameters:(id)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(MLAppleGazetteerParameters *)parameters;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithParameters:(id)arg1 modelDescription:(id)arg2 nlpHandle:(id)arg3 configuration:(id)arg4 error:(id*)arg5 ;
@end

