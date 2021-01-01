/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSString, NSNumber;

@interface CEMSystemRatingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSString* _payloadRatingRegion;
	NSNumber* _payloadRatingApps;
	NSNumber* _payloadRatingMovies;
	NSNumber* _payloadRatingTVShows;
	NSNumber* _payloadAllowExplicitContent;
	NSNumber* _payloadAllowShowingUndownloadedTV;
	NSNumber* _payloadAllowShowingUndownloadedMovies;

}

@property (nonatomic,copy) NSString * payloadRatingRegion;                                //@synthesize payloadRatingRegion=_payloadRatingRegion - In the implementation block
@property (nonatomic,copy) NSNumber * payloadRatingApps;                                  //@synthesize payloadRatingApps=_payloadRatingApps - In the implementation block
@property (nonatomic,copy) NSNumber * payloadRatingMovies;                                //@synthesize payloadRatingMovies=_payloadRatingMovies - In the implementation block
@property (nonatomic,copy) NSNumber * payloadRatingTVShows;                               //@synthesize payloadRatingTVShows=_payloadRatingTVShows - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowExplicitContent;                        //@synthesize payloadAllowExplicitContent=_payloadAllowExplicitContent - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowShowingUndownloadedTV;                  //@synthesize payloadAllowShowingUndownloadedTV=_payloadAllowShowingUndownloadedTV - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowShowingUndownloadedMovies;              //@synthesize payloadAllowShowingUndownloadedMovies=_payloadAllowShowingUndownloadedMovies - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)buildWithIdentifier:(id)arg1 withRatingRegion:(id)arg2 withRatingApps:(id)arg3 withRatingMovies:(id)arg4 withRatingTVShows:(id)arg5 withAllowExplicitContent:(id)arg6 withAllowShowingUndownloadedTV:(id)arg7 withAllowShowingUndownloadedMovies:(id)arg8 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadRatingRegion:(NSString *)arg1 ;
-(void)setPayloadRatingApps:(NSNumber *)arg1 ;
-(void)setPayloadRatingMovies:(NSNumber *)arg1 ;
-(void)setPayloadRatingTVShows:(NSNumber *)arg1 ;
-(void)setPayloadAllowExplicitContent:(NSNumber *)arg1 ;
-(void)setPayloadAllowShowingUndownloadedTV:(NSNumber *)arg1 ;
-(void)setPayloadAllowShowingUndownloadedMovies:(NSNumber *)arg1 ;
-(NSString *)payloadRatingRegion;
-(NSNumber *)payloadRatingApps;
-(NSNumber *)payloadRatingMovies;
-(NSNumber *)payloadRatingTVShows;
-(NSNumber *)payloadAllowExplicitContent;
-(NSNumber *)payloadAllowShowingUndownloadedTV;
-(NSNumber *)payloadAllowShowingUndownloadedMovies;
@end

