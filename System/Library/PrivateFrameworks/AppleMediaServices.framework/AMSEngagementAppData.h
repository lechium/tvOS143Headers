/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSString;

@interface AMSEngagementAppData : NSObject {

	NSArray* _cachedResponses;
	NSString* _identifier;
	NSArray* _whitelist;

}

@property (nonatomic,retain) NSArray * cachedResponses;              //@synthesize cachedResponses=_cachedResponses - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSArray * whitelist;                    //@synthesize whitelist=_whitelist - In the implementation block
-(NSString *)identifier;
-(NSArray *)whitelist;
-(void)setWhitelist:(NSArray *)arg1 ;
-(NSArray *)cachedResponses;
-(id)exportObject;
-(id)initWithIdentifier:(id)arg1 cacheObject:(id)arg2 ;
-(void)setCachedResponses:(NSArray *)arg1 ;
@end

