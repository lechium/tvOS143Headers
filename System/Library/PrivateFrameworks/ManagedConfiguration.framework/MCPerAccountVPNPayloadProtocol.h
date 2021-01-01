/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSArray;


@protocol MCPerAccountVPNPayloadProtocol
@property (nonatomic,retain,readonly) NSString * VPNUUID; 
@property (nonatomic,retain,readonly) NSArray * mailAccountIdentifiers; 
@property (nonatomic,retain,readonly) NSArray * contactsAccountIdentifiers; 
@property (nonatomic,retain,readonly) NSArray * calendarAccountIdentifiers; 
@optional
-(NSArray *)mailAccountIdentifiers;
-(NSArray *)contactsAccountIdentifiers;
-(NSArray *)calendarAccountIdentifiers;

@required
-(NSString *)VPNUUID;

@end

