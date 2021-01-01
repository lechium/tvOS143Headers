/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSNumber;

@interface MCDomainsCacheEntry : NSObject {

	BOOL _subdomainsMatch;
	NSString* _domain;
	NSString* _path;
	NSNumber* _port;

}

@property (assign,nonatomic) BOOL subdomainsMatch;              //@synthesize subdomainsMatch=_subdomainsMatch - In the implementation block
@property (nonatomic,retain) NSString * domain;                 //@synthesize domain=_domain - In the implementation block
@property (nonatomic,retain) NSString * path;                   //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSNumber * port;                   //@synthesize port=_port - In the implementation block
+(id)normalizedPatternString:(id)arg1 ;
-(id)description;
-(NSString *)domain;
-(NSNumber *)port;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(void)setPort:(NSNumber *)arg1 ;
-(BOOL)matchesURL:(id)arg1 ;
-(id)initWithPattern:(id)arg1 ;
-(BOOL)subdomainsMatch;
-(void)setSubdomainsMatch:(BOOL)arg1 ;
@end
