/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ABPredicateDelegate <NSObject>
@optional
-(BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 metadata:(id)arg3;
-(BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 moreComing:(BOOL)arg3;
-(BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 metadata:(id)arg3 moreComing:(BOOL)arg4;

@required
-(BOOL)predicateShouldContinue:(id)arg1;
-(BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2;

@end
