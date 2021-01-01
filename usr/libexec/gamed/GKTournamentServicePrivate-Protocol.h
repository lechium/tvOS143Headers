//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKTournamentService-Protocol.h"

@class GKTournamentInternal, NSString;

@protocol GKTournamentServicePrivate <GKTournamentService>
- (oneway void)removeCustomTournament:(GKTournamentInternal *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)resetTournamentDataForTournamentsWithTournamentDefinitionIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (oneway void)loadTournamentWithID:(NSString *)arg1 completionHandler:(void (^)(GKTournamentInternal *, NSError *))arg2;
@end

