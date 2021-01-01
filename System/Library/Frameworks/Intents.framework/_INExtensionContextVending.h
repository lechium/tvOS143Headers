/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _INExtensionContextVending <NSObject>
@optional
-(oneway void)startSendingUpdatesForIntent:(id)arg1 toObserver:(id)arg2;
-(oneway void)stopSendingUpdatesForIntent:(id)arg1;
-(oneway void)confirmationResponseForIntent:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)handleIntent:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)handleIntent:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(oneway void)completeTransaction;
-(oneway void)cancelTransactionDueToTimeout;
-(oneway void)getIntentParameterOptions:(id)arg1 forIntent:(id)arg2 completionBlock:(/*^block*/id)arg3;

@required
-(oneway void)getIntentParameterOptions:(id)arg1 forIntent:(id)arg2 searchTerm:(id)arg3 completionBlock:(/*^block*/id)arg4;
-(oneway void)getIntentParameterDefaultValue:(id)arg1 forIntent:(id)arg2 completionBlock:(/*^block*/id)arg3;
-(oneway void)resolveIntentSlot:(id)arg1 forIntent:(id)arg2 completionBlock:(/*^block*/id)arg3;
-(oneway void)resolveIntentSlots:(id)arg1 forIntent:(id)arg2 completionBlock:(/*^block*/id)arg3;
-(oneway void)confirmIntent:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(oneway void)handleIntent:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(oneway void)beginTransactionWithIntentIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)completeTransactionWithIntentIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)cancelTransactionDueToTimeoutWithIntentIdentifier:(id)arg1 completion:(/*^block*/id)arg2;

@end

