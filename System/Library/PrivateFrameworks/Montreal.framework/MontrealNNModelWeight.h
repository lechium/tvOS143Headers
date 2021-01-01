/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:06 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Montreal/MontrealNNDescription.h>
#import <Montreal/MontrealNNDescriptionProtocol.h>

@class NSString, NSNumber, NSArray, NSData, MontrealNNModelQuantization;

@interface MontrealNNModelWeight : MontrealNNDescription <MontrealNNDescriptionProtocol> {

	NSString* _name;
	NSNumber* _index;
	NSArray* _dimension;
	NSArray* _weightValues;
	NSData* _weightData;
	MontrealNNModelQuantization* _quantization;
	NSString* _jsonDir;

}

@property (readonly) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (readonly) NSNumber * index;                                        //@synthesize index=_index - In the implementation block
@property (readonly) NSArray * dimension;                                     //@synthesize dimension=_dimension - In the implementation block
@property (readonly) NSArray * weightValues;                                  //@synthesize weightValues=_weightValues - In the implementation block
@property (readonly) NSData * weightData;                                     //@synthesize weightData=_weightData - In the implementation block
@property (readonly) MontrealNNModelQuantization * quantization;              //@synthesize quantization=_quantization - In the implementation block
@property (readonly) NSString * jsonDir;                                      //@synthesize jsonDir=_jsonDir - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(NSNumber *)index;
-(NSArray *)dimension;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(id)jsonDescription;
-(id)checkForValidity;
-(void)generateJSONAtPath:(id)arg1 ;
-(NSString *)jsonDir;
-(id)createDataContainer;
-(MontrealNNModelQuantization *)quantization;
-(id)initWithDictionary:(id)arg1 quantization:(id)arg2 jsonDir:(id)arg3 ;
-(id)initWithName:(id)arg1 index:(id)arg2 dimension:(id)arg3 weightValues:(id)arg4 ;
-(id)initWithName:(id)arg1 index:(id)arg2 dimension:(id)arg3 weightData:(id)arg4 ;
-(id)initWithName:(id)arg1 index:(id)arg2 dimension:(id)arg3 ;
-(NSArray *)weightValues;
-(id)createflattenWeightsFile:(id)arg1 ;
-(id)createConvertArrayToData:(id)arg1 quantization:(id)arg2 ;
-(NSData *)weightData;
-(id)createflattenWeightsHierarchy:(id)arg1 ;
@end

