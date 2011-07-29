//
//  NavigationSpikeAppDelegate.h
//  NavigationSpike
//
//  Created by skizz on 7/29/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NavigationSpikeAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;


@property(nonatomic, retain) UIView *musicPlayer;
@property(nonatomic, retain) UIView *dateWidget;

@property(nonatomic, retain) UIView *currentPage;
@property(nonatomic, retain) UIView *page1;
@property(nonatomic, retain) UIView *page2;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
