/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TrustedPeers/TrustedPeers-Structs.h>
@class NSSet, NSDictionary, NSData;

@interface TPPeerDynamicInfo : NSObject {

	unsigned long long _clock;
	NSSet* _includedPeerIDs;
	NSSet* _excludedPeerIDs;
	NSDictionary* _dispositions;
	NSSet* _preapprovals;
	NSData* _data;
	NSData* _sig;

}

@property (nonatomic,retain) NSData * data;                            //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSData * sig;                             //@synthesize sig=_sig - In the implementation block
@property (nonatomic,retain) NSDictionary * dispositions;              //@synthesize dispositions=_dispositions - In the implementation block
@property (nonatomic,readonly) unsigned long long clock;               //@synthesize clock=_clock - In the implementation block
@property (nonatomic,readonly) NSSet * includedPeerIDs;                //@synthesize includedPeerIDs=_includedPeerIDs - In the implementation block
@property (nonatomic,readonly) NSSet * excludedPeerIDs;                //@synthesize excludedPeerIDs=_excludedPeerIDs - In the implementation block
@property (nonatomic,readonly) NSSet * preapprovals;                   //@synthesize preapprovals=_preapprovals - In the implementation block
+(id)dynamicInfoPBWithClock:(unsigned long long)arg1 includedPeerIDs:(id)arg2 excludedPeerIDs:(id)arg3 dispositions:(id)arg4 preapprovals:(id)arg5 ;
+(id)dynamicInfoWithClock:(unsigned long long)arg1 includedPeerIDs:(id)arg2 excludedPeerIDs:(id)arg3 dispositions:(id)arg4 preapprovals:(id)arg5 signingKeyPair:(id)arg6 error:(id*)arg7 ;
+(id)dynamicInfoWithData:(id)arg1 sig:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)clock;
-(void)setSig:(NSData *)arg1 ;
-(NSData *)sig;
-(id)initWithObj:(id)arg1 data:(id)arg2 sig:(id)arg3 ;
-(BOOL)checkSignatureWithKey:(id)arg1 ;
-(BOOL)isEqualToPeerDynamicInfo:(id)arg1 ;
-(NSSet *)includedPeerIDs;
-(NSSet *)excludedPeerIDs;
-(NSDictionary *)dispositions;
-(void)setDispositions:(NSDictionary *)arg1 ;
-(NSSet *)preapprovals;
@end

