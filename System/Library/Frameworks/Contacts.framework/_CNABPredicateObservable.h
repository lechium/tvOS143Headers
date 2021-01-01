/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsFoundation/CNObservable.h>
#import <libobjc.A.dylib/ABPredicateDelegate.h>

@protocol CNObserver;
@class ABPredicate, CNContactsEnvironment, CNCancelationToken, NSString;

@interface _CNABPredicateObservable : CNObservable <ABPredicateDelegate> {

	void* _addressBook;
	unsigned _sortOrdering;
	ABPredicate* _predicate;
	unsigned long long _options;
	CNContactsEnvironment* _environment;
	CNCancelationToken* _cancelationToken;
	id<CNObserver> _observer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)subscribe:(id)arg1 ;
-(BOOL)predicateShouldContinue:(id)arg1 ;
-(BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 metadata:(id)arg3 ;
-(BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 ;
-(BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 moreComing:(BOOL)arg3 ;
@end

