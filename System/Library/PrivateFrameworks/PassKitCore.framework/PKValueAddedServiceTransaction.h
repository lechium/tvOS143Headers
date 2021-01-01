/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKValueAddedMerchant, NSString, NSNumber, NSDate;

@interface PKValueAddedServiceTransaction : NSObject <NSSecureCoding> {

	BOOL _didSucceed;
	PKValueAddedMerchant* _merchant;
	NSString* _identifier;
	NSString* _merchantURL;
	NSNumber* _terminalApplicationVersion;
	long long _terminalMode;
	NSDate* _transactionDate;
	long long _error;

}

@property (nonatomic,retain) PKValueAddedMerchant * merchant;                    //@synthesize merchant=_merchant - In the implementation block
@property (nonatomic,retain) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * merchantURL;                             //@synthesize merchantURL=_merchantURL - In the implementation block
@property (nonatomic,retain) NSNumber * terminalApplicationVersion;              //@synthesize terminalApplicationVersion=_terminalApplicationVersion - In the implementation block
@property (assign,nonatomic) long long terminalMode;                             //@synthesize terminalMode=_terminalMode - In the implementation block
@property (assign,nonatomic) BOOL didSucceed;                                    //@synthesize didSucceed=_didSucceed - In the implementation block
@property (nonatomic,retain) NSDate * transactionDate;                           //@synthesize transactionDate=_transactionDate - In the implementation block
@property (assign,nonatomic) long long error;                                    //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(long long)error;
-(void)setError:(long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)didSucceed;
-(void)setDidSucceed:(BOOL)arg1 ;
-(NSDate *)transactionDate;
-(void)setTransactionDate:(NSDate *)arg1 ;
-(PKValueAddedMerchant *)merchant;
-(void)setMerchant:(PKValueAddedMerchant *)arg1 ;
-(NSString *)merchantURL;
-(void)setMerchantURL:(NSString *)arg1 ;
-(NSNumber *)terminalApplicationVersion;
-(void)setTerminalApplicationVersion:(NSNumber *)arg1 ;
-(long long)terminalMode;
-(void)setTerminalMode:(long long)arg1 ;
@end

