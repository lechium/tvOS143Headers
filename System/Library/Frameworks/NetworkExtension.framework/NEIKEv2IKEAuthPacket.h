/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NEIKEv2Packet.h>

@class NEIKEv2ChildSAPayload, NEIKEv2InitiatorIdentifierPayload, NEIKEv2ResponderIdentifierPayload, NSArray, NEIKEv2AuthPayload, NEIKEv2EAPPayload, NEIKEv2ConfigPayload, NEIKEv2InitiatorTrafficSelectorPayload, NEIKEv2ResponderTrafficSelectorPayload;

@interface NEIKEv2IKEAuthPacket : NEIKEv2Packet {

	NEIKEv2ChildSAPayload* _sa;
	NEIKEv2InitiatorIdentifierPayload* _idi;
	NEIKEv2ResponderIdentifierPayload* _idr;
	NSArray* _certificates;
	NSArray* _certificateRequests;
	NEIKEv2AuthPayload* _auth;
	NEIKEv2EAPPayload* _eap;
	NEIKEv2ConfigPayload* _config;
	NEIKEv2InitiatorTrafficSelectorPayload* _tsi;
	NEIKEv2ResponderTrafficSelectorPayload* _tsr;
	NSArray* _vendorIDs;

}

@property (retain) NEIKEv2ChildSAPayload * sa;                                //@synthesize sa=_sa - In the implementation block
@property (retain) NEIKEv2InitiatorIdentifierPayload * idi;                   //@synthesize idi=_idi - In the implementation block
@property (retain) NEIKEv2ResponderIdentifierPayload * idr;                   //@synthesize idr=_idr - In the implementation block
@property (retain) NSArray * certificates;                                    //@synthesize certificates=_certificates - In the implementation block
@property (retain) NSArray * certificateRequests;                             //@synthesize certificateRequests=_certificateRequests - In the implementation block
@property (retain) NEIKEv2AuthPayload * auth;                                 //@synthesize auth=_auth - In the implementation block
@property (retain) NEIKEv2EAPPayload * eap;                                   //@synthesize eap=_eap - In the implementation block
@property (retain) NEIKEv2ConfigPayload * config;                             //@synthesize config=_config - In the implementation block
@property (retain) NEIKEv2InitiatorTrafficSelectorPayload * tsi;              //@synthesize tsi=_tsi - In the implementation block
@property (retain) NEIKEv2ResponderTrafficSelectorPayload * tsr;              //@synthesize tsr=_tsr - In the implementation block
@property (retain) NSArray * vendorIDs;                                       //@synthesize vendorIDs=_vendorIDs - In the implementation block
+(id)copyTypeDescription;
+(id)createEAPForInitiatorIKESA:(id)arg1 childSA:(id)arg2 lastResponderPacket:(id)arg3 ;
+(id)createIKEAuthForInitiatorIKESA:(id)arg1 childSA:(id)arg2 ;
+(id)createIKEAuthResponse:(id)arg1 refusalError:(unsigned long long)arg2 ;
+(id)createIKEAuthResponse:(id)arg1 ikeSA:(id)arg2 childSA:(id)arg3 ;
+(unsigned long long)exchangeType;
-(NSArray *)certificates;
-(NEIKEv2ConfigPayload *)config;
-(void)setConfig:(NEIKEv2ConfigPayload *)arg1 ;
-(void)setAuth:(NEIKEv2AuthPayload *)arg1 ;
-(NEIKEv2AuthPayload *)auth;
-(void)setCertificates:(NSArray *)arg1 ;
-(NEIKEv2ChildSAPayload *)sa;
-(void)setTsi:(NEIKEv2InitiatorTrafficSelectorPayload *)arg1 ;
-(NEIKEv2InitiatorTrafficSelectorPayload *)tsi;
-(void)setTsr:(NEIKEv2ResponderTrafficSelectorPayload *)arg1 ;
-(NEIKEv2ResponderTrafficSelectorPayload *)tsr;
-(NEIKEv2EAPPayload *)eap;
-(id)validateEAPOnlyAuthentication:(id)arg1 ;
-(BOOL)validateAuthAsInitiator:(id)arg1 childSA:(id)arg2 ;
-(id)validateAuthPart1AsResponderCopyErrorForIKESA:(id)arg1 ;
-(id)validateAuthPart2AsResponderCopyErrorForIKESA:(id)arg1 childSA:(id)arg2 ;
-(void)setIdi:(NEIKEv2InitiatorIdentifierPayload *)arg1 ;
-(NEIKEv2InitiatorIdentifierPayload *)idi;
-(void)setIdr:(NEIKEv2ResponderIdentifierPayload *)arg1 ;
-(NEIKEv2ResponderIdentifierPayload *)idr;
-(void)setSa:(NEIKEv2ChildSAPayload *)arg1 ;
-(void)setCertificateRequests:(NSArray *)arg1 ;
-(NSArray *)vendorIDs;
-(void)setVendorIDs:(NSArray *)arg1 ;
-(BOOL)validateFirstAuthPayloadsForInitiator:(id)arg1 childSA:(id)arg2 ;
-(void)setEap:(NEIKEv2EAPPayload *)arg1 ;
-(void)gatherPayloads;
-(void)filloutPayloads;
-(NSArray *)certificateRequests;
@end

