//
//  AppDelegate.h
//  PhotoWheel
//
//  Created by Kirby Turner on 8/7/11.
//  Copyright (c) 2011 White Peak Software Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (nonatomic, assign, readonly, getter=isPersistentStoreReady) BOOL persistentStoreReady;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
