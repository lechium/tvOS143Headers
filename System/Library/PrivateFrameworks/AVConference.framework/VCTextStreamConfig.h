/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVConference/VCMediaStreamConfig.h>

@interface VCTextStreamConfig : VCMediaStreamConfig {

	unsigned char _numRedundantPayloads;
	BOOL _redEnabled;
	float _txIntervalMin;

}

@property (getter=isRedEnabled,nonatomic,readonly) BOOL redEnabled;              //@synthesize redEnabled=_redEnabled - In the implementation block
@property (assign,nonatomic) unsigned char numRedundantPayloads;                 //@synthesize numRedundantPayloads=_numRedundantPayloads - In the implementation block
@property (assign,nonatomic) float txIntervalMin;                                //@synthesize txIntervalMin=_txIntervalMin - In the implementation block
-(id)initWithClientDictionary:(id)arg1 ;
-(BOOL)isRedEnabled;
-(unsigned char)numRedundantPayloads;
-(float)txIntervalMin;
-(void)setNumRedundantPayloads:(unsigned char)arg1 ;
-(BOOL)setupCodecWithClientDictionary:(id)arg1 ;
-(void)setTxIntervalMin:(float)arg1 ;
@end

