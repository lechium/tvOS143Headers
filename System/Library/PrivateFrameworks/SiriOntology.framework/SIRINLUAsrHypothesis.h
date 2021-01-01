/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriOntology.framework/SiriOntology
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID;

@interface SIRINLUAsrHypothesis : NSObject <NSSecureCoding> {

	NSString* _utterance;
	double _probability;
	NSUUID* _uuid;

}

@property (nonatomic,retain) NSString * utterance;              //@synthesize utterance=_utterance - In the implementation block
@property (assign,nonatomic) double probability;                //@synthesize probability=_probability - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                     //@synthesize uuid=_uuid - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSString *)utterance;
-(void)setUtterance:(NSString *)arg1 ;
-(double)probability;
-(void)setProbability:(double)arg1 ;
-(id)initWithUtterance:(id)arg1 probability:(double)arg2 uuid:(id)arg3 ;
@end
