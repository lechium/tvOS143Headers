/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@interface _EARLmData : NSObject {

	BOOL _roundingEnabled;
	shared_ptr<quasar::LmData>* _data;

}

@property (nonatomic,readonly) shared_ptr<quasar::LmData>* data;              //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) BOOL roundingEnabled;                            //@synthesize roundingEnabled=_roundingEnabled - In the implementation block
+(void)initialize;
-(shared_ptr<quasar::LmData>*)data;
-(id)metrics;
-(id)sources;
-(double)maxAge;
-(unsigned long long)queryLimit;
-(id)initWithConfiguration:(id)arg1 ncsRoot:(id)arg2 recognizerConfiguration:(id)arg3 ;
-(void)addDocumentWithUUID:(id)arg1 content:(id)arg2 ;
-(void)addSentenceWithType:(unsigned long long)arg1 uuid:(id)arg2 content:(id)arg3 ;
-(BOOL)roomForMoreData;
-(double)minAge;
-(BOOL)roundingEnabled;
-(void)setRoundingEnabled:(BOOL)arg1 ;
@end
