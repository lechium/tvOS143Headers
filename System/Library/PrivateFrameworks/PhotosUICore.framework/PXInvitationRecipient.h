/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PLSInvitationRecipient.h>

@class CNComposeRecipient, NSString, NSMutableArray, NSArray;

@interface PXInvitationRecipient : NSObject <PLSInvitationRecipient> {

	CNComposeRecipient* _recipient;
	NSString* _firstName;
	NSString* _lastName;
	NSMutableArray* _allEmails;
	NSMutableArray* _allPhones;
	NSString* _selectedPhoneString;
	NSString* _selectedEmailString;
	NSString* _invalidAddressString;

}

@property (nonatomic,copy,readonly) NSString * firstName; 
@property (nonatomic,copy,readonly) NSString * lastName; 
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSArray * allEmails;                               //@synthesize allEmails=_allEmails - In the implementation block
@property (nonatomic,readonly) NSArray * allPhones;                               //@synthesize allPhones=_allPhones - In the implementation block
@property (nonatomic,copy,readonly) NSString * selectedPhoneString;               //@synthesize selectedPhoneString=_selectedPhoneString - In the implementation block
@property (nonatomic,copy,readonly) NSString * selectedEmailString;               //@synthesize selectedEmailString=_selectedEmailString - In the implementation block
@property (nonatomic,copy,readonly) NSString * invalidAddressString;              //@synthesize invalidAddressString=_invalidAddressString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_validEmailAddressFromComposeRecipient:(id)arg1 ;
+(id)_validPhoneNumberFromString:(id)arg1 ;
-(NSString *)description;
-(id)init;
-(NSString *)displayName;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSArray *)allPhones;
-(NSArray *)allEmails;
-(id)initWithRecipient:(id)arg1 ;
-(NSString *)selectedPhoneString;
-(NSString *)selectedEmailString;
-(NSString *)invalidAddressString;
@end

