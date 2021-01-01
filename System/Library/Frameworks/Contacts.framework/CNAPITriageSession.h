/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CNAPITriageLogger, CNTimeProvider;
@class CNContactFetchRequest;

@interface CNAPITriageSession : NSObject {

	id<CNAPITriageLogger> _logger;
	id<CNTimeProvider> _timeProvider;
	double _timeSessionBegan;
	double _timeSessionEnded;
	double _clientCalloutTime;
	BOOL _hasClientCalloutTime;
	CNContactFetchRequest* _request;

}

@property (readonly) CNContactFetchRequest * request;              //@synthesize request=_request - In the implementation block
@property (readonly) id<CNAPITriageLogger> logger;                 //@synthesize logger=_logger - In the implementation block
@property (readonly) id<CNTimeProvider> timeProvider;              //@synthesize timeProvider=_timeProvider - In the implementation block
-(id)init;
-(void)open;
-(void)close;
-(CNContactFetchRequest *)request;
-(id<CNAPITriageLogger>)logger;
-(id)initWithRequest:(id)arg1 ;
-(id<CNTimeProvider>)timeProvider;
-(void)closeWithError:(id)arg1 ;
-(void)closeWithContacts:(id)arg1 ;
-(void)addClientCalloutTime:(double)arg1 ;
-(void)closeWithContacts:(id)arg1 orError:(id)arg2 ;
-(id)initWithRequest:(id)arg1 triageLogger:(id)arg2 timeProvider:(id)arg3 ;
-(void)closeWithResult:(id)arg1 ;
@end

