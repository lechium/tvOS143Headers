/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Futhark.framework/Futhark
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Futhark/Futhark-Structs.h>
@class NSArray, NSString;

@interface FKTextFeature : NSObject {

	SCD_Union_FK0 _backingIndex;
	FKSession* _session;
	int _scale;
	float _confidence;
	NSArray* _candidates;
	long long _featureID;
	NSArray* _corners;
	long long _type;
	NSString* _text;
	NSArray* _subFeatures;
	CGRect _boundingBox;

}

@property (nonatomic,retain) NSArray * subFeatures;                   //@synthesize subFeatures=_subFeatures - In the implementation block
@property (nonatomic,copy) NSString * text;                           //@synthesize text=_text - In the implementation block
@property (assign) float confidence;                                  //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) long long featureID;                   //@synthesize featureID=_featureID - In the implementation block
@property (nonatomic,readonly) CGRect boundingBox;                    //@synthesize boundingBox=_boundingBox - In the implementation block
@property (nonatomic,retain,readonly) NSArray * corners;              //@synthesize corners=_corners - In the implementation block
@property (nonatomic,readonly) long long type;                        //@synthesize type=_type - In the implementation block
@property (readonly) NSArray * candidates;                            //@synthesize candidates=_candidates - In the implementation block
+(id)featureFromConcompIndex:(int)arg1 session:(FKSession*)arg2 scaling:(SCD_Struct_FK4*)arg3 type:(long long)arg4 createDiacriticFeatures:(BOOL)arg5 featureID:(long long*)arg6 ;
+(id)featureFromSequenceIndex:(int)arg1 session:(FKSession*)arg2 scaling:(SCD_Struct_FK4*)arg3 createConcompFeatures:(BOOL)arg4 createDiacriticFeatures:(BOOL)arg5 featureID:(long long*)arg6 ;
-(void)dealloc;
-(long long)type;
-(float)confidence;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setConfidence:(float)arg1 ;
-(CGRect)boundingBox;
-(NSArray *)subFeatures;
-(NSArray *)corners;
-(NSArray *)candidates;
-(long long)featureID;
-(id)initWithType:(long long)arg1 boundingBox:(CGRect*)arg2 corners:(id)arg3 featureID:(long long)arg4 session:(FKSession*)arg5 backingIndex:(/*function pointer*/void*)arg6 scale:(int)arg7 ;
-(void)setSubFeatures:(NSArray *)arg1 ;
@end

