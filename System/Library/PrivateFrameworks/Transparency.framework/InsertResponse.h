/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PrivateFederatedLearning/GPBMessage.h>

@class SignedMutationTimestamp, VRFWitness, NSData, NSString;

@interface InsertResponse : GPBMessage

@property (assign,nonatomic) int status; 
@property (nonatomic,retain) SignedMutationTimestamp * smt; 
@property (assign,nonatomic) BOOL hasSmt; 
@property (nonatomic,retain) VRFWitness * uriWitness; 
@property (assign,nonatomic) BOOL hasUriWitness; 
@property (nonatomic,copy) NSData * accountId; 
@property (nonatomic,retain) VRFWitness * deviceIdWitness; 
@property (assign,nonatomic) BOOL hasDeviceIdWitness; 
@property (nonatomic,retain) VRFWitness * clientDataWitness; 
@property (assign,nonatomic) BOOL hasClientDataWitness; 
@property (nonatomic,copy) NSString * serverEventInfo; 
+(id)descriptor;
@end
