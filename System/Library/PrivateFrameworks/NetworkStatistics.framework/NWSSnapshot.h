/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:31 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <NetworkStatistics/NetworkStatistics-Structs.h>
@class NSString, NSDictionary;

@interface NWSSnapshot : NSObject {

	nstat_counts _counts;
	unsigned long long _changeSeqno;
	unsigned long long _sourceIdentifier;
	NSString* _provider;
	NSDictionary* _traditionalDictionary;

}

@property (readonly) unsigned _rxDuplicateBytes; 
@property (readonly) unsigned _rxOutOfOrderBytes; 
@property (readonly) unsigned _txRetransmittedBytes; 
@property (readonly) unsigned _connectAttempts; 
@property (readonly) unsigned _connectSuccesses; 
@property (readonly) double _rttMinimum; 
@property (readonly) double _rttAverage; 
@property (readonly) double _rttVariation; 
@property (readonly) unsigned long long rxPackets; 
@property (readonly) unsigned long long rxBytes; 
@property (readonly) unsigned long long txPackets; 
@property (readonly) unsigned long long txBytes; 
@property (readonly) unsigned long long rxCellularBytes; 
@property (readonly) unsigned long long rxWiFiBytes; 
@property (readonly) unsigned long long rxWiredBytes; 
@property (readonly) unsigned long long txCellularBytes; 
@property (readonly) unsigned long long txWiFiBytes; 
@property (readonly) unsigned long long txWiredBytes; 
@property (readonly) unsigned long long changeSeqno;                    //@synthesize changeSeqno=_changeSeqno - In the implementation block
@property (readonly) unsigned long long sourceIdentifier;               //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (readonly) NSString * provider;                               //@synthesize provider=_provider - In the implementation block
@property (readonly) NSDictionary * traditionalDictionary;              //@synthesize traditionalDictionary=_traditionalDictionary - In the implementation block
-(id)description;
-(NSString *)provider;
-(unsigned long long)txBytes;
-(unsigned long long)rxBytes;
-(unsigned)_rxOutOfOrderBytes;
-(unsigned long long)rxPackets;
-(unsigned long long)txPackets;
-(NSDictionary *)traditionalDictionary;
-(unsigned long long)sourceIdentifier;
-(id)_createCountsForProvider:(int)arg1 ;
-(id)_initWithCounts:(const nstat_counts*)arg1 sourceIdent:(unsigned long long)arg2 seqno:(unsigned long long)arg3 ;
-(unsigned)_rxDuplicateBytes;
-(unsigned)_txRetransmittedBytes;
-(unsigned)_connectAttempts;
-(unsigned)_connectSuccesses;
-(double)_rttMinimum;
-(double)_rttAverage;
-(double)_rttVariation;
-(unsigned long long)rxCellularBytes;
-(unsigned long long)txCellularBytes;
-(unsigned long long)rxWiFiBytes;
-(unsigned long long)txWiFiBytes;
-(unsigned long long)rxWiredBytes;
-(unsigned long long)txWiredBytes;
-(unsigned long long)changeSeqno;
@end

