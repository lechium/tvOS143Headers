/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:21 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNUIPeopleSource.h>

@class CNUIAccountsFacade, CNContactStore, NSArray, NSString;

@interface CNUIFamilyPeopleSource : NSObject <CNUIPeopleSource> {

	BOOL _fetching;
	CNUIAccountsFacade* _accountsFacade;
	CNContactStore* _contactStore;
	NSArray* _familyMembers;
	NSArray* _familyContacts;
	id _familyRequest;

}

@property (nonatomic,retain) CNUIAccountsFacade * accountsFacade;              //@synthesize accountsFacade=_accountsFacade - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                    //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) NSArray * familyMembers;                          //@synthesize familyMembers=_familyMembers - In the implementation block
@property (nonatomic,retain) NSArray * familyContacts;                         //@synthesize familyContacts=_familyContacts - In the implementation block
@property (nonatomic,retain) id familyRequest;                                 //@synthesize familyRequest=_familyRequest - In the implementation block
@property (assign,nonatomic) BOOL fetching;                                    //@synthesize fetching=_fetching - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sourceKind;
+(id)sourceWithEnvironment:(id)arg1 contactStore:(id)arg2 ;
-(id)groups;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(NSArray *)familyMembers;
-(void)setFamilyMembers:(NSArray *)arg1 ;
-(id)peopleInGroup:(id)arg1 keysToFetch:(id)arg2 ;
-(BOOL)fetching;
-(void)setFetching:(BOOL)arg1 ;
-(CNUIAccountsFacade *)accountsFacade;
-(void)setAccountsFacade:(CNUIAccountsFacade *)arg1 ;
-(void)fetchFamilyMembers;
-(NSArray *)familyContacts;
-(/*^block*/id)familyContactFromFamilyMemberTransformWithKeysToFetch:(id)arg1 ;
-(void)setFamilyContacts:(NSArray *)arg1 ;
-(id)familyRequest;
-(void)setFamilyRequest:(id)arg1 ;
@end

