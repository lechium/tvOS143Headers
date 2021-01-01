/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:49 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNEncodedFetchCursor.h>

@protocol CNEncodedFetchCursor, CNContactsLogger;
@class CNContactFetchRequest, CNContactsEnvironment, CNManagedConfiguration, NSString;

@interface CNiOSEncodedPeopleFetcher : NSObject <CNEncodedFetchCursor> {

	void* _addressBook;
	CNContactFetchRequest* _contactFetchRequest;
	CNContactsEnvironment* _environment;
	/*^block*/id _completionHandler;
	id<CNEncodedFetchCursor> _cursor;
	id<CNContactsLogger> _logger;
	CNManagedConfiguration* _managedConfiguration;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)fetchNextBatchWithReply:(/*^block*/id)arg1 ;
-(id)initWithFetchRequest:(id)arg1 addressBook:(void*)arg2 managedConfiguration:(id)arg3 completionHandler:(/*^block*/id)arg4 environment:(id)arg5 ;
-(BOOL)fetchEncodedPeopleWithError:(id*)arg1 cancelationToken:(id)arg2 batchHandler:(/*^block*/id)arg3 ;
@end

